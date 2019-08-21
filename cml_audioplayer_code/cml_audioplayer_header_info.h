#include "cml_audioplayer_header.h"
struct CML_AudioPlayer_Header 
{
	/* RIFF string*/
	uc riff[4];   
  
	/* overall size of file in bytes*/
	ui overall_size; 

	/* WAVE string*/
	uc wave[4];     

	/* fmt string with trailing null char*/
	uc fmt_chunk_marker[4]; 

	/* length of the format data*/
	ui length_of_fmt;

	/* format type. 1-PCM, 3- IEEE float, 6 - 8bit A law, 7 - 8bit mu law 
	ui format_type;*/

	/* no.of channels  */
	ui channels;	

	/*sampling rate (blocks per second)*/
	ui sample_rate;

	/* SampleRate * NumChannels * BitsPerSample/8 */
	ui byterate;	

	/* NumChannels * BitsPerSample/8*/
	ui block_align; 

	/* bits per sample, 8- 8bits, 16- 16 bits etc*/
	ui bits_per_sample; 
        /* SampleRate * NumChannels * BitsPerSample/8 */
	ui byterate;	

	/*NumChannels * BitsPerSample/8*/
	ui block_align; 

	/* bits per sample, 8- 8bits, 16- 16 bits etc*/
	ui bits_per_sample; 

	/* DATA string or FLLR string*/
	uc data_chunk_header [4];

	/* NumSamples * NumChannels * BitsPerSample/8 - size of the next chunk that will be read*/
	ui  data_size;
};

