//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/PUICDictationViewControllerDelegate-Protocol.h>

@class NSArray, NSFileHandle, PUICDictationViewController, UIColor, UIImage;

@protocol PUICDictationViewControllerDelegatePrivate <PUICDictationViewControllerDelegate>

@optional
- (void)dictationViewControllerDidSelectAudio:(PUICDictationViewController *)arg1;
- (UIImage *)imageForAudioRecordingOfWidth:(float)arg1 color:(UIColor *)arg2 powerLevels:(NSArray *)arg3;
- (void)dictationViewController:(PUICDictationViewController *)arg1 finishedRecordingAudio:(NSFileHandle *)arg2;
- (NSFileHandle *)fileHandleForAudioRecording;
@end

