//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray;

__attribute__((visibility("hidden")))
@interface REGainRampingAudioUnit : AUAudioUnit
{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<boost::lockfree::queue<GainRampCommand>, std::__1::default_delete<boost::lockfree::queue<GainRampCommand>>> _rampGainQueue;
    float _targetGain;
    unsigned int _remainingRampFrames;
    float _currentGain;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) float currentGain; // @synthesize currentGain=_currentGain;
- (CDUnknownBlockType)internalRenderBlock;
- (void)fadeToGain:(float)arg1 duration:(double)arg2;
- (id)channelCapabilities;
- (id)outputBusses;
- (id)inputBusses;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

