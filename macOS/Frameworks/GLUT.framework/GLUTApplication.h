//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import <GLUT/NSApplicationDelegate-Protocol.h>

@class NSDate, NSMenuItem, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface GLUTApplication : NSApplication <NSApplicationDelegate>
{
    NSMenuItem *_aboutMenuItem;
    NSMenuItem *_hideMenuItem;
    NSMenuItem *_quitMenuItem;
    NSDate *_distantFuture;
    NSDate *_distantPast;
    NSMutableSet *_viewStorage;
    BOOL _isPackaged;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)_readMouseConfiguration;
- (void)runOnce;
- (void)run;
- (void)_runMainLoopUntilDate:(id)arg1 autoreleasePool:(id *)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

