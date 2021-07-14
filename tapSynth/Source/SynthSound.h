/*
  ==============================================================================

    SynthSound.h
    Created: 14 Jul 2021 6:36:41pm
    Author:  Aaron Muesing

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true; }
    bool appliesToChannel (int mindChannel) override { return true; }
    
};
