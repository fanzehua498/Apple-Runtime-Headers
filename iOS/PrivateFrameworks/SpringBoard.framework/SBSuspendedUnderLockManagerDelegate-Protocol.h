//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBScene, NSSet, SBDeviceApplicationSceneHandle, SBSuspendedUnderLockManager;

@protocol SBSuspendedUnderLockManagerDelegate <NSObject>
- (NSSet *)suspendedUnderLockManagerVisibleScenesInLayoutState:(SBSuspendedUnderLockManager *)arg1;
- (NSSet *)runningApplicationScenes:(SBSuspendedUnderLockManager *)arg1;
- (SBDeviceApplicationSceneHandle *)suspendedUnderLockManager:(SBSuspendedUnderLockManager *)arg1 sceneHandleForScene:(FBScene *)arg2;
- (FBSDisplayConfiguration *)suspendedUnderLockManagerDisplayConfiguration:(SBSuspendedUnderLockManager *)arg1;
@end

