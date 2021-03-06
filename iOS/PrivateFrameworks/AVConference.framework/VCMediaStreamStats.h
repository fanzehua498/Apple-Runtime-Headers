//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaStreamStats : NSObject
{
    struct tagHANDLE *_summerHandle;
    double _lastRecordingTime;
    unsigned int _maxBitrateKbps;
    unsigned int _minBitrateKbps;
    double _maxFramerate;
    double _minFramerate;
    unsigned short _maxFrameDurationMillis;
}

@property(nonatomic) unsigned short maxFrameDurationMillis; // @synthesize maxFrameDurationMillis=_maxFrameDurationMillis;
@property(nonatomic) double maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property(nonatomic) double minFramerate; // @synthesize minFramerate=_minFramerate;
@property(nonatomic) unsigned int maxBitrateKbps; // @synthesize maxBitrateKbps=_maxBitrateKbps;
@property(nonatomic) unsigned int minBitrateKbps; // @synthesize minBitrateKbps=_minBitrateKbps;
- (unsigned int)getBitrateKbpsSinceTime:(double)arg1;
- (double)getFramerateSinceTime:(double)arg1;
- (void)updateMinMaxSinceTime:(double)arg1;
@property(readonly, nonatomic) unsigned int bitrateKbps;
@property(readonly, nonatomic) double framerate;
- (void)recordDataWithSize:(double)arg1 atTime:(double)arg2;
- (void)dealloc;
- (id)init;

@end

