//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DKInkThumbnailRenderer : NSObject
{
}

+ (BOOL)_drawDebugPatternInGLContext:(id)arg1 inSize:(struct CGSize)arg2;
+ (id)_imageForDrawingUsingGL:(id)arg1 fittingInSize:(struct CGSize)arg2 displayScale:(double)arg3 color:(id)arg4;
+ (void)_drawPath:(id)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 inkColor:(id)arg4 backgroundColor:(id)arg5 inContext:(struct CGContext *)arg6;
+ (struct CGPath *)_newStrokedInterpolatedPathWithDrawing:(id)arg1 inSize:(struct CGSize)arg2 displayScale:(double)arg3;
+ (void)_interpolateDrawing:(id)arg1 inSize:(struct CGSize)arg2 displayScale:(double)arg3 ellipseHandler:(CDUnknownBlockType)arg4;
+ (id)_imageForDrawingUsingCG:(id)arg1 fittingInSize:(struct CGSize)arg2 displayScale:(double)arg3 color:(id)arg4;
+ (double)scaleToFitDrawing:(id)arg1 inSize:(struct CGSize)arg2;
+ (id)imageForDrawing:(id)arg1 fittingInSize:(struct CGSize)arg2 backingScale:(double)arg3 color:(id)arg4 highFidelity:(BOOL)arg5;
+ (id)imageForDrawing:(id)arg1 fittingInSize:(struct CGSize)arg2 color:(id)arg3 highFidelity:(BOOL)arg4;
+ (struct CGSize)sizeForDrawing:(id)arg1 inSize:(struct CGSize)arg2;

@end

