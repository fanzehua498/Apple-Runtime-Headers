//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSWPTextAdornment-Protocol.h>
#import <TSText/TSWPTextAdornmentRenderer-Protocol.h>

@class NSArray, NSString, TSDFill, TSDWrapSegments, TSUBezierPath, TSWPCharacterStyle, TSWPDropCap, TSWPDropCapCharacterMetrics, TSWPDropCapStyle, TSWPParagraphStyle;
@protocol TSWPTextSource;

@interface TSWPDropCapAdornment : NSObject <TSWPTextAdornment, TSWPTextAdornmentRenderer>
{
    _Bool _isRightToLeft;
    _Bool _isVertical;
    _Bool _hasChangeTracking;
    TSWPDropCap *_dropCap;
    id <TSWPTextSource> _text;
    NSString *_coreTextString;
    TSWPDropCapStyle *_dropCapStyle;
    double _advance;
    double _wrapPadding;
    long long _lineSpacingMode;
    double _lineSpacingAmount;
    double _singleLineHeight;
    TSWPDropCapCharacterMetrics *_characterMetrics;
    NSArray *_glyphPaths;
    NSArray *_glyphAuthorColors;
    TSUBezierPath *_shapePath;
    TSDWrapSegments *_wrapSegments;
    TSUBezierPath *_pathForExteriorWrap;
    TSWPCharacterStyle *_characterStyle;
    TSWPParagraphStyle *_paragraphStyle;
    NSString *_fontPostScriptName;
    double _unscaledFontSize;
    double _fontScaleFactor;
    struct CGSize _size;
    struct CGPoint _origin;
    struct CGPoint _glyphOffset;
    struct CGRect _underlineRect;
    struct CGRect _characterFillRect;
    struct CGRect _dropCapFrame;
    struct CGRect _textFrame;
    struct CGRect _insetTextFrame;
    struct TSWPFontHeightInfo _heightInfo;
    struct TSWPFontHeightInfo _fontHeightInfo;
}

+ (struct CGRect)boundsOfMinimumCircleEnclosingPath:(id)arg1;
+ (unsigned long long)convertPointsToConvexHull:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) double fontScaleFactor; // @synthesize fontScaleFactor=_fontScaleFactor;
@property(nonatomic) double unscaledFontSize; // @synthesize unscaledFontSize=_unscaledFontSize;
@property(copy, nonatomic) NSString *fontPostScriptName; // @synthesize fontPostScriptName=_fontPostScriptName;
@property(retain, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) TSWPCharacterStyle *characterStyle; // @synthesize characterStyle=_characterStyle;
@property(nonatomic) _Bool hasChangeTracking; // @synthesize hasChangeTracking=_hasChangeTracking;
@property(retain, nonatomic) TSUBezierPath *pathForExteriorWrap; // @synthesize pathForExteriorWrap=_pathForExteriorWrap;
@property(retain, nonatomic) TSDWrapSegments *wrapSegments; // @synthesize wrapSegments=_wrapSegments;
@property(retain, nonatomic) TSUBezierPath *shapePath; // @synthesize shapePath=_shapePath;
@property(nonatomic) struct CGPoint glyphOffset; // @synthesize glyphOffset=_glyphOffset;
@property(retain, nonatomic) NSArray *glyphAuthorColors; // @synthesize glyphAuthorColors=_glyphAuthorColors;
@property(retain, nonatomic) NSArray *glyphPaths; // @synthesize glyphPaths=_glyphPaths;
@property(retain, nonatomic) TSWPDropCapCharacterMetrics *characterMetrics; // @synthesize characterMetrics=_characterMetrics;
@property(nonatomic) struct CGRect insetTextFrame; // @synthesize insetTextFrame=_insetTextFrame;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) struct CGRect dropCapFrame; // @synthesize dropCapFrame=_dropCapFrame;
@property(nonatomic) double singleLineHeight; // @synthesize singleLineHeight=_singleLineHeight;
@property(nonatomic) double lineSpacingAmount; // @synthesize lineSpacingAmount=_lineSpacingAmount;
@property(nonatomic) long long lineSpacingMode; // @synthesize lineSpacingMode=_lineSpacingMode;
@property(nonatomic) struct TSWPFontHeightInfo fontHeightInfo; // @synthesize fontHeightInfo=_fontHeightInfo;
@property(nonatomic) struct CGRect characterFillRect; // @synthesize characterFillRect=_characterFillRect;
@property(nonatomic) struct CGRect underlineRect; // @synthesize underlineRect=_underlineRect;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) double wrapPadding; // @synthesize wrapPadding=_wrapPadding;
@property(readonly, nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(readonly, nonatomic) _Bool isRightToLeft; // @synthesize isRightToLeft=_isRightToLeft;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double advance; // @synthesize advance=_advance;
@property(nonatomic) struct TSWPFontHeightInfo heightInfo; // @synthesize heightInfo=_heightInfo;
@property(retain, nonatomic) TSWPDropCapStyle *dropCapStyle; // @synthesize dropCapStyle=_dropCapStyle;
@property(retain, nonatomic) NSString *coreTextString; // @synthesize coreTextString=_coreTextString;
@property(retain, nonatomic) id <TSWPTextSource> text; // @synthesize text=_text;
@property(retain, nonatomic) TSWPDropCap *dropCap; // @synthesize dropCap=_dropCap;
@property(readonly, copy) NSString *debugDescription;
- (id)paddedPathForExteriorWrap;
- (id)styleArray;
- (id)p_styleArrayWithFontSize:(double)arg1;
- (id)p_styleArray;
- (id)p_createWrapSegments;
- (id)p_paddedPathForExteriorWrap;
- (id)p_pathForExteriorWrap;
- (_Bool)p_calculateMetrics;
- (void)drawAdornment:(id)arg1 inContext:(struct CGContext *)arg2 viewScale:(double)arg3 flipShadows:(_Bool)arg4;
@property(readonly, nonatomic) struct CGRect trailingCaretBounds;
- (id)adornmentRenderer;
- (id)splitLine:(struct CGRect)arg1 skipHint:(out double *)arg2;
@property(readonly, nonatomic) _Bool suppressLineFragmentTextRendering;
- (double)widthForCharacterAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double baselineShift;
@property(readonly, nonatomic) TSDFill *characterFill;
- (double)scaledFontSize;
@property(readonly, nonatomic) double outdentInPoints;
@property(readonly, nonatomic) double dynamicPadding;
- (struct CGRect)p_imageBoundsIncludingShadow:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect glyphBounds;
@property(readonly, nonatomic) struct CGRect erasableBounds;
@property(readonly, nonatomic) struct CGRect outermostPathRawBounds;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)offsetBy:(struct CGSize)arg1;
- (id)initWithDropCapStyle:(id)arg1 characterStyle:(id)arg2 paragraphStyle:(id)arg3 text:(id)arg4 rightToLeft:(_Bool)arg5 vertical:(_Bool)arg6 fontHeightInfo:(struct TSWPFontHeightInfo)arg7 lineSpacingMode:(long long)arg8 lineSpacingAmount:(double)arg9;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

