//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFRadar-Protocol.h>

@class NSString;

@interface PFRadar : NSObject <PFRadar>
{
}

+ (void)newProblemWithTitle:(id)arg1 description:(id)arg2 component:(id)arg3 version:(id)arg4;
+ (void)newProblemWithTitle:(id)arg1 description:(id)arg2;
+ (Class)radarClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

