//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEChannelMixer : PAEFilterDefaultBase
{
}

- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4 fromParam:(int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (BOOL)constrainMonoParams:(int)arg1 atTime:(CDUnion_baaf6063)arg2;
- (BOOL)monochromeChanged:(CDUnion_baaf6063)arg1;
- (BOOL)parameterChanged:(unsigned int)arg1;
- (BOOL)addParameters;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;

@end

