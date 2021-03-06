//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSWindow;

@interface AXVCGMagicZoomWindow : NSObject
{
    BOOL _fullscreen;
    BOOL _smoothImages;
    BOOL _invertColor;
    BOOL _keepFullyContainedWithinScreens;
    BOOL _keepZoomedRegionAndZoomWindowCentersAligned;
    BOOL _visible;
    BOOL __referenceWindowCreated;
    BOOL __invertColorFilterAdded;
    BOOL __drawingDisabled;
    BOOL __frameChangedWhileDrawingDisabled;
    unsigned int __invertColorFilterID;
    unsigned int __mainCGSConnectionID;
    unsigned int __zoomWindowID;
    unsigned int __zoomWindowNumber;
    double _zoomFactor;
    unsigned long long _pinnedZoomFrameDuringZoomFactorChanges;
    long long _level;
    NSWindow *__referenceWindow;
    NSLock *__drawingLock;
    double __previousScreenBackingScaleFactor;
    struct CGSize _minimumSize;
    struct CGRect _frame;
    struct CGRect _zoomedRegionFrame;
    struct CGRect __frameBeforeGoingFullscreen;
}

+ (long long)_getNextAvailableZoomWindowNumber;
+ (id)keyPathsForValuesAffectingIsZoomed;
+ (id)keyPathsForValuesAffectingZoomedRegionSize;
+ (id)keyPathsForValuesAffectingZoomedRegionCenter;
+ (id)keyPathsForValuesAffectingZoomedRegionFrame;
+ (id)keyPathsForValuesAffectingSize;
+ (id)keyPathsForValuesAffectingCenter;
+ (id)keyPathsForValuesAffectingframe;
- (void).cxx_destruct;
@property(nonatomic) double _previousScreenBackingScaleFactor; // @synthesize _previousScreenBackingScaleFactor=__previousScreenBackingScaleFactor;
@property(nonatomic) BOOL _frameChangedWhileDrawingDisabled; // @synthesize _frameChangedWhileDrawingDisabled=__frameChangedWhileDrawingDisabled;
@property(nonatomic) BOOL _drawingDisabled; // @synthesize _drawingDisabled=__drawingDisabled;
@property(retain, nonatomic) NSLock *_drawingLock; // @synthesize _drawingLock=__drawingLock;
@property(nonatomic) struct CGRect _frameBeforeGoingFullscreen; // @synthesize _frameBeforeGoingFullscreen=__frameBeforeGoingFullscreen;
@property(nonatomic) BOOL _invertColorFilterAdded; // @synthesize _invertColorFilterAdded=__invertColorFilterAdded;
@property(readonly, nonatomic) unsigned int _zoomWindowNumber; // @synthesize _zoomWindowNumber=__zoomWindowNumber;
@property(nonatomic) BOOL _referenceWindowCreated; // @synthesize _referenceWindowCreated=__referenceWindowCreated;
@property(retain, nonatomic) NSWindow *_referenceWindow; // @synthesize _referenceWindow=__referenceWindow;
@property(nonatomic) unsigned int _zoomWindowID; // @synthesize _zoomWindowID=__zoomWindowID;
@property(readonly, nonatomic) unsigned int _mainCGSConnectionID; // @synthesize _mainCGSConnectionID=__mainCGSConnectionID;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long pinnedZoomFrameDuringZoomFactorChanges; // @synthesize pinnedZoomFrameDuringZoomFactorChanges=_pinnedZoomFrameDuringZoomFactorChanges;
@property(nonatomic) BOOL keepZoomedRegionAndZoomWindowCentersAligned; // @synthesize keepZoomedRegionAndZoomWindowCentersAligned=_keepZoomedRegionAndZoomWindowCentersAligned;
@property(nonatomic) BOOL keepFullyContainedWithinScreens; // @synthesize keepFullyContainedWithinScreens=_keepFullyContainedWithinScreens;
@property(nonatomic) BOOL invertColor; // @synthesize invertColor=_invertColor;
@property(nonatomic) BOOL smoothImages; // @synthesize smoothImages=_smoothImages;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) struct CGRect zoomedRegionFrame; // @synthesize zoomedRegionFrame=_zoomedRegionFrame;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)_updateMagicZoomWindow;
- (BOOL)_setJustZoomFactor:(double)arg1;
- (BOOL)_setJustZoomedRegionFrame:(struct CGRect)arg1;
- (BOOL)_setJustFullscreen:(BOOL)arg1;
- (BOOL)_setJustZoomWindowFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned int _invertColorFilterID; // @synthesize _invertColorFilterID=__invertColorFilterID;
- (void)levelDidChange;
- (void)frameDidChange;
- (void)redraw;
- (void)endNonDrawingTransaction;
- (void)beginNonDrawingTransaction;
- (void)hide;
- (void)show;
@property(nonatomic) long long maxZoomedWindowLevel;
@property(readonly, nonatomic) BOOL isZoomed;
@property(nonatomic) struct CGSize zoomedRegionSize;
@property(nonatomic) struct CGPoint zoomedRegionCenter;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint center;
- (void)_setTrustedForObscuring;
- (void)dealloc;
- (id)initWithZoomWindowNumber:(long long)arg1 referenceWindow:(id)arg2;
- (id)initWithMaxZoomedWindowLevel:(long long)arg1;
- (id)initWithReferenceWindow:(id)arg1;
- (id)init;

@end

