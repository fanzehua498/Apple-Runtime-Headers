//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/NSObject-Protocol.h>

@class FBSScene, FBSSceneSnapshotAction, FBSSceneSnapshotContext;

@protocol UIApplicationSnapshotPreparing <NSObject>
- (void)extendSnapshotContext:(FBSSceneSnapshotContext *)arg1 forSnapshotAction:(FBSSceneSnapshotAction *)arg2;
- (void)prepareSnapshotsWithAction:(FBSSceneSnapshotAction *)arg1 forScene:(FBSScene *)arg2 completion:(void (^)(void))arg3;
@end

