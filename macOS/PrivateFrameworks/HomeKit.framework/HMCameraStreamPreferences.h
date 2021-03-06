//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>
{
    HMCameraStreamAudioPreferences *_audioPreferences;
    HMCameraStreamVideoPreferences *_videoPreferences;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMCameraStreamVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(readonly, nonatomic) HMCameraStreamAudioPreferences *audioPreferences; // @synthesize audioPreferences=_audioPreferences;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2;

@end

