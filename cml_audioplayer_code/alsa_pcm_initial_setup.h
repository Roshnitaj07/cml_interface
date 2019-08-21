int fr,tr;
int size;
snd_pcm_t *pcm_handle;
snd_pcm_hw_params_t *params;
unsigned int sample_rate;
int dir;
snd_pcm_uframes_t frames;
char *buffer,*ter_buf;
int mfp;
int channels;

fr = snd_pcm_open(&pcm_handle, "default",SND_PCM_STREAM_PLAYBACK, 0);
  if (fr < 0) {
    fprintf(stderr,"unable to open pcm device: %s\n",snd_strerror(fr));
    exit(1);
  }
/* Allocate a hardware parameters object. */
  snd_pcm_hw_params_alloca(&params);

  /* Fill it in with default values. */
  snd_pcm_hw_params_any(pcm_handle, params);

  /* Set the desired hardware parameters,Interleaved mode */
  snd_pcm_hw_params_set_access(pcm_handle, params,SND_PCM_ACCESS_RW_INTERLEAVED);

  /* Signed 16-bit little-endian format */
  snd_pcm_hw_params_set_format(pcm_handle, params,SND_PCM_FORMAT_S16_LE);
  snd_pcm_hw_params_set_channels(pcm_handle, params, channels);

  /*sample_rate = 8000;*/
  snd_pcm_hw_params_set_rate_near(pcm_handle, params, &sample_rate, &dir);

  /* Set period size to 32 frames.frames = 32;*/
 snd_pcm_hw_params_set_period_size_near(pcm_handle, params, &frames, &dir);

 /* Write the parameters to the driver */
  fr = snd_pcm_hw_params(pcm_handle, params);
  if (fr < 0) {
    fprintf(stderr,"unable to set hw parameters: %s\n",
            snd_strerror(fr));
    exit(1);
  }
/* Use a buffer large enough to hold one period */
  snd_pcm_hw_params_get_period_size(params, &frames,&dir);
  size = frames * 4;/*2 * sizeof(float); 2 bytes/sample, 2 channels */
  buffer = (char *) malloc(size);
 // ter_buf = (char *)malloc(10);




