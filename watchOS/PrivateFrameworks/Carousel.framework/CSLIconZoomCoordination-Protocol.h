//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLIconZoomCoordinationContext, NSString;

@protocol CSLIconZoomCoordination <NSObject>
- (void)endZoomingAtZoomLevel:(float)arg1 didChangeZoomLevels:(_Bool)arg2;
- (void)zoomLevelDidChange:(float)arg1;
- (void)prepareToZoomWithContext:(CSLIconZoomCoordinationContext *)arg1;
- (NSString *)bundleIdentifierForIcon;
@end

