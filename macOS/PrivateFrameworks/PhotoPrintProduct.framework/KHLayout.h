//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

#import <PhotoPrintProduct/KHJSONGeneratorProtocol-Protocol.h>
#import <PhotoPrintProduct/KHSelectable-Protocol.h>
#import <PhotoPrintProduct/KHSortingProtocol-Protocol.h>

@class KHEnvironment, KHFrame, KHTreatment, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableString, NSString, NSUndoManager;

@interface KHLayout : KHModel <KHJSONGeneratorProtocol, KHSelectable, KHSortingProtocol>
{
    long long _treatmentId;
    long long _designTag;
    unsigned long long _layoutTypeId;
    NSString *_name;
    double _width;
    double _height;
    long long _holeCount;
    long long _showsPageNumber;
    long long _thumbnailId;
    long long _hasPhotoFrames;
    long long _hasTextFrames;
    long long _hasMapFrames;
    unsigned long long _mirror;
    long long _drawingBehavior;
    NSString *_alternativeLayoutIds;
    double _favorability;
    long long _disableBackground;
    NSMutableDictionary *_attributeCache;
    KHTreatment *_treatment;
    double _bindingEdgeTrim;
    KHFrame *_treatmentFrame;
    KHFrame *_frameMat;
    KHEnvironment *_environment;
    KHFrame *_parentFrame;
    NSMutableString *_aspectRatioString;
    NSMutableString *_aspectRatioStringWithWildcards;
    NSMutableArray *_framesByDrawingOrder;
    NSMutableDictionary *_cachedPageTypes;
    NSMutableArray *_selectionFrames;
    NSMutableSet *_alternativeLayouts;
    long long _updateCount;
    NSLock *_environmentLock;
    NSLock *_treatmentLock;
    NSLock *_renderingLock;
    BOOL _isRendering;
    NSLock *_pageTypeCacheLock;
    NSLock *_frameCacheLock;
    BOOL _ignoresBehaviors;
    BOOL _hovering;
    BOOL _isFullBleed;
    BOOL _didCacheFullBleedTest;
    BOOL _hasFullBleedArtFrame;
    BOOL _didCacheFullBleedArtTest;
    BOOL _changingOrientation;
    NSMutableDictionary *_increasedHoleCountLayouts;
    BOOL _locked;
    BOOL _notifyProjectAfterBatchUpdates;
    NSDate *_modificationDate;
    NSDate *_modificationDateInBatchUpdates;
}

+ (id)perfectMatchesForAspectRatios:(id)arg1 inLayouts:(id)arg2;
+ (id)perfectMatchesForUnorderedAspectRatios:(id)arg1 inLayouts:(id)arg2;
+ (id)bestMatchForUnorderedAspectRatios:(id)arg1 inAlternativeLayoutsOf:(id)arg2;
+ (id)bestMatchForUnorderedAspectRatios:(id)arg1 inLayouts:(id)arg2;
+ (id)bestMatchForAspectRatios:(id)arg1 inLayouts:(id)arg2 matchingLengthOnly:(BOOL)arg3 allowMap:(BOOL)arg4;
+ (id)bestMatchForAspectRatios:(id)arg1 inLayouts:(id)arg2;
+ (id)bestMatchForAspectRatios:(id)arg1 inAlternativeLayoutsOf:(id)arg2;
+ (id)layoutsSuitableForPhotoCount:(unsigned long long)arg1 inLayouts:(id)arg2;
+ (double)maximumLayoutFavorabilityForLayouts:(id)arg1;
+ (long long)maximumHoleCountForLayouts:(id)arg1;
+ (id)holeCountSequenceForLayouts:(id)arg1;
+ (id)layoutsWithHoleCount:(long long)arg1 inLayouts:(id)arg2;
+ (BOOL)hasLayoutWithHoleCount:(long long)arg1 inLayouts:(id)arg2;
+ (id)layoutsOfType:(unsigned long long)arg1 inLayouts:(id)arg2;
+ (id)spreadLayoutsInLayouts:(id)arg1;
+ (id)fullBleedPhotoLayoutsInLayouts:(id)arg1;
+ (id)layoutForTheme:(id)arg1 andProduct:(id)arg2 withLegacyName:(id)arg3;
+ (id)layoutForTheme:(id)arg1 andProduct:(id)arg2 withName:(id)arg3;
+ (id)layoutForKey:(long long)arg1 fromDatabase:(id)arg2;
+ (id)layoutForKey:(long long)arg1;
+ (id)backCoverLayoutsForTheme:(id)arg1 andProduct:(id)arg2;
+ (id)insideLayoutsForTheme:(id)arg1 andProduct:(id)arg2;
+ (id)flapLayoutsForTheme:(id)arg1 andProduct:(id)arg2;
+ (id)coverLayoutsForTheme:(id)arg1 andProduct:(id)arg2;
+ (id)coverLayoutsForTheme:(id)arg1 andProduct:(id)arg2 withHoleCount:(long long)arg3;
+ (id)layoutsForTheme:(id)arg1 andProduct:(id)arg2 sortedBy:(unsigned long long)arg3;
+ (id)layoutsForTheme:(id)arg1 andProduct:(id)arg2;
+ (id)allLayoutsSortedBy:(unsigned long long)arg1 fromDatabase:(id)arg2;
+ (id)allLayoutsFromDatabase:(id)arg1;
+ (void)scanFrame:(id)arg1 holeCount:(long long *)arg2 hasText:(char *)arg3 primarilyText:(char *)arg4 hasMap:(char *)arg5 primarilyMap:(char *)arg6;
+ (Class)frameClass;
+ (id)modifyModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
+ (id)generateModelFromJSON:(id)arg1 inDatabase:(id)arg2 bundlePath:(id)arg3;
@property BOOL notifyProjectAfterBatchUpdates; // @synthesize notifyProjectAfterBatchUpdates=_notifyProjectAfterBatchUpdates;
@property(retain) NSDate *modificationDateInBatchUpdates; // @synthesize modificationDateInBatchUpdates=_modificationDateInBatchUpdates;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property BOOL locked; // @synthesize locked=_locked;
- (id)accessibilityRoleDescription;
- (id)accessibilityLabel;
- (id)formattedDescription;
@property(readonly, copy) NSString *debugDescription;
- (id)debugInfo;
- (void)writeValue:(id)arg1 toField:(id)arg2;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)setValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (void)removeAttributeForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (void)loadAttributes;
- (void)applyBehavior:(id)arg1;
- (void)resizeFrames:(id)arg1 resizeType:(unsigned long long)arg2;
- (void)distributeFrames:(id)arg1 distributeType:(unsigned long long)arg2;
- (void)alignFrames:(id)arg1 alignType:(unsigned long long)arg2;
- (id)mergeFrames:(id)arg1;
- (id)splitFrames:(id)arg1 withGap:(double)arg2 columns:(unsigned long long)arg3 rows:(unsigned long long)arg4;
- (id)duplicateFrame:(id)arg1;
- (id)addDefaultFrameOfType:(id)arg1;
- (void)frameRectDidChangeForFrame:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)frameRectWillChangeForFrame:(id)arg1 toRect:(struct CGRect)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)didRemoveFrame:(id)arg1;
- (void)willRemoveFrame:(id)arg1;
- (void)didAddFrame:(id)arg1;
- (void)willAddFrame:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (void)frameWillChange:(id)arg1;
- (void)_didPerformModification:(BOOL)arg1;
- (void)_willPerformModification:(BOOL)arg1;
- (void)clearFrameCaches;
- (void)addSelectionFrame:(id)arg1 rotation:(double)arg2 strokeStyle:(unsigned long long)arg3;
- (void)destroyTreatmentFrame;
- (void)createTreatmentFrame;
- (id)treatmentFrame;
- (void)createFrameMat;
- (void)destroyFrameMat;
- (void)updateFrameMat;
- (struct CGRect)rectForFrameMat;
- (id)frameMat;
- (id)backgroundPhotoFrame;
- (void)setBackgroundTreatment:(id)arg1 momentary:(BOOL)arg2;
- (void)setIsHovering:(BOOL)arg1;
- (BOOL)isHovering;
- (void)clearBehaviorCache;
- (void)setIgnoresBehaviors:(BOOL)arg1;
- (BOOL)ignoresBehaviors;
- (void)evaluateEnvironmentFromFrame:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (id)environment;
- (void)setBindingEdgeTrim:(double)arg1;
- (double)bindingEdgeTrim;
- (double)heightWithBleed;
- (double)widthWithBleed;
- (long long)sortByHoleCount:(id)arg1;
- (long long)sortByUsage:(id)arg1;
- (long long)sortByName:(id)arg1;
- (long long)sortById:(id)arg1;
- (long long)sortByDefault:(id)arg1;
- (BOOL)hasFullBleedArtFrame;
- (BOOL)isFullBleed;
- (void)projectDidChange;
- (void)projectWillChange;
- (id)project;
- (id)baseLayout;
- (double)baseRotation;
- (void)unload;
- (void)remove;
- (void)clearAspectRatioString;
- (id)aspectRatioStringPhotoFrames;
- (unsigned long long)emptyHoleCountIncludeBackground:(BOOL)arg1;
- (unsigned long long)emptyHoleCount;
- (id)emptyPhotoFramesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2;
- (id)emptyPhotoFramesSortedBy:(unsigned long long)arg1;
- (id)placedPhotoInfos;
- (id)placedPhotoIDsIncludeBackground:(BOOL)arg1;
- (id)placedPhotoIDs;
- (void)moveToFront:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)moveFrame:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)reflow;
- (BOOL)wildcardsEnabled;
- (void)setTextOnlyBehaviorColor:(id)arg1;
- (void)setFrameTreatmentStrokeColor:(id)arg1;
- (void)setFrameTreatmentFillColor:(id)arg1;
- (void)setBrandingFillColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (id)brandingFillFrames;
- (id)treatmentFillFrames;
- (id)secondaryTextFrames;
- (id)primaryTextFrames;
- (id)strokeBehaviorFrames;
- (id)textOnlyBehaviorFrames;
- (id)framesWithContentIssueOfType:(unsigned long long)arg1;
- (id)framesWithCroppedPhotos;
- (id)framesWithLowResolutionPhotos;
- (id)framesWithInvalidPhotos;
- (id)framesWithMissingPhotos;
- (id)framesWithEmptyPhotos;
- (id)framesWithBoilerPlateText;
- (id)framesWithUserEditedText;
- (id)framesWithClippedText;
- (id)textFramesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2 textFramesOption:(unsigned long long)arg3;
- (id)mapFramesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2;
- (id)textFramesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2;
- (id)photoFramesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2;
- (id)hyperlinkFramesSortedBy:(unsigned long long)arg1;
- (id)calendarFramesSortedBy:(unsigned long long)arg1;
- (id)artFramesSortedBy:(unsigned long long)arg1;
- (id)mapFramesSortedBy:(unsigned long long)arg1;
- (id)textFramesSortedBy:(unsigned long long)arg1;
- (id)photoFramesSortedBy:(unsigned long long)arg1;
- (struct CGRect)boundingRectOfFrames;
- (id)frames;
- (id)framesSortedBy:(unsigned long long)arg1;
- (id)framesSortedBy:(unsigned long long)arg1 includeLayerFrames:(BOOL)arg2;
- (id)framesSortedBy:(unsigned long long)arg1 includeBackground:(BOOL)arg2;
- (id)framesSortedBy:(unsigned long long)arg1 includeChildFrames:(BOOL)arg2;
- (id)framesSortedBy:(unsigned long long)arg1 includeLayerFrames:(BOOL)arg2 includeBackground:(BOOL)arg3 includeChildFrames:(BOOL)arg4;
- (id)framesOfType:(unsigned long long)arg1 sortedBy:(unsigned long long)arg2 includeLayerFrames:(BOOL)arg3 includeBackground:(BOOL)arg4 includeChildFrames:(BOOL)arg5;
- (id)_layerFramesOnFrame:(id)arg1;
- (void)invalidateDrawingFrameCache;
- (BOOL)isPageType:(unsigned long long)arg1 forTheme:(id)arg2;
- (id)treatment;
- (id)uniqueName;
- (id)increasedHoleCountLayoutForTheme:(id)arg1 andProduct:(id)arg2;
- (id)theme;
- (void)setBindableTreatment:(id)arg1;
- (id)bindableTreatment;
- (void)undoRedoSetBackgroundTreatment:(id)arg1 linked:(BOOL)arg2;
- (void)applyRepresentativeLayout:(id)arg1;
- (BOOL)undoRedoApplyMaster:(id)arg1 mirror:(BOOL)arg2 allowResize:(BOOL)arg3;
- (BOOL)applyMaster:(id)arg1 mirror:(BOOL)arg2 allowResize:(BOOL)arg3;
- (BOOL)applyMaster:(id)arg1 mirror:(BOOL)arg2;
- (id)representativeLayout;
- (id)masterLayout;
- (BOOL)isSimilarToModel:(id)arg1 skippingFields:(id)arg2 differences:(id *)arg3;
@property(readonly, nonatomic) NSUndoManager *undoManager;
@property(nonatomic) struct CGSize size;
- (BOOL)isChangingOrientation;
- (void)setChangingOrientation:(BOOL)arg1;
- (id)parentFrame;
- (void)cacheParentFrame:(id)arg1;
- (void)setWildcardScale:(double)arg1;
- (void)cacheWildcardScale:(double)arg1;
- (double)wildcardScale;
- (void)setDisableBackground:(long long)arg1;
- (void)cacheDisableBackground:(long long)arg1;
- (long long)disableBackground;
- (void)setFavorability:(double)arg1;
- (void)cacheFavorability:(double)arg1;
- (double)favorability;
- (id)alternativeLayouts;
- (void)setAlternativeLayoutIds:(id)arg1;
- (void)cacheAlternativeLayoutIds:(id)arg1;
- (id)alternativeLayoutIds;
- (void)setDrawingBehavior:(long long)arg1;
- (void)cacheDrawingBehavior:(long long)arg1;
- (long long)drawingBehavior;
- (void)setMirror:(unsigned long long)arg1;
- (void)cacheMirror:(unsigned long long)arg1;
- (unsigned long long)mirror;
- (void)setHasMapFrames:(long long)arg1;
- (void)cacheHasMapFrames:(long long)arg1;
- (long long)hasMapFrames;
- (void)setHasTextFrames:(long long)arg1;
- (void)cacheHasTextFrames:(long long)arg1;
- (long long)hasTextFrames;
- (void)setHasPhotoFrames:(long long)arg1;
- (void)cacheHasPhotoFrames:(long long)arg1;
- (long long)hasPhotoFrames;
- (void)setThumbnailId:(long long)arg1;
- (void)cacheThumbnailId:(long long)arg1;
- (long long)thumbnailId;
- (void)setCalendarDate:(id)arg1;
- (id)calendarDate;
- (id)pageName;
- (long long)pageNumber;
- (void)setShowsPageNumber:(long long)arg1;
- (void)cacheShowsPageNumber:(long long)arg1;
- (long long)showsPageNumber;
- (void)setHoleCount:(long long)arg1;
- (void)cacheHoleCount:(long long)arg1;
- (long long)holeCount;
- (void)setHeight:(double)arg1 force:(BOOL)arg2;
- (void)setHeight:(double)arg1;
- (void)cacheHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1 force:(BOOL)arg2;
- (void)setWidth:(double)arg1;
- (void)cacheWidth:(double)arg1;
- (double)width;
- (void)setName:(id)arg1;
- (void)cacheName:(id)arg1;
- (id)name;
- (void)setLayoutTypeId:(unsigned long long)arg1;
- (void)cacheLayoutTypeId:(unsigned long long)arg1;
- (unsigned long long)layoutTypeId;
- (void)setDesignTag:(long long)arg1;
- (void)cacheDesignTag:(long long)arg1;
- (long long)designTag;
- (void)setTreatmentId:(long long)arg1;
- (void)cacheTreatmentId:(long long)arg1;
- (long long)treatmentId;
- (void)dealloc;
- (void)encodeWithDictionary:(id)arg1;
- (id)initWithUuid:(id)arg1 forEntity:(id)arg2;
- (id)init;
- (void)commonInit;
- (id)JSONRepresentation;
- (id)frameAtPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (struct CGPoint)basePoint:(struct CGPoint)arg1 scale:(double)arg2;
- (struct CGRect)trimmedRectForScale:(double)arg1;
- (id)debugQuickLookObject;
- (void)fillThumbnailContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (void)fillTreatmentContext:(struct CGContext *)arg1 scale:(double)arg2 environment:(id)arg3;
- (void)drawBackgroundInContext:(struct CGContext *)arg1 scale:(double)arg2 drawRect:(struct CGRect)arg3;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 includeBackground:(BOOL)arg4 environment:(id)arg5;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 includeBackground:(BOOL)arg4 leftFacing:(BOOL)arg5 environment:(id)arg6;
- (void)_mirrorFramesMomentary;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 includeBackground:(BOOL)arg4;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 clippingRect:(struct CGRect)arg4 includeBackground:(BOOL)arg5 environment:(id)arg6;
- (struct CGRect)rectWithScale:(double)arg1;
- (struct CGPath *)selectionPathAtScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

