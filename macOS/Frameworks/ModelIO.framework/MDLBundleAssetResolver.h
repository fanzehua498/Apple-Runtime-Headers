//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class NSBundle, NSString;

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver>
{
    NSBundle *_bundle;
    NSString *_path;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

