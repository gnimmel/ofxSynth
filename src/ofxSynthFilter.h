#pragma once

#include "ofSoundEffect.h"

class ofxSynthFilter : public ofSoundEffect{
	public:
		void			setup();
		string			getName() { return "ofxSynthFilter"; }
		virtual void	process( float* input, float *output, int numFrames, int numInChannels, int numOutChannels );
		void			setCutoff(float _cutoff);
		float			getCutoff(){return cutoff;};
		void			setRes(float _res);
		float			getRes(){return resonance;};
		void			processSample(float *inputSample);
		void			setLowPass();
		void			setHighPass();
		bool			lowPass;
	private:
		float			f, p, q, cutoff, resonance;
		float			b0, b1, b2, b3, b4;
		float			t1, t2;
		void			calc();
};