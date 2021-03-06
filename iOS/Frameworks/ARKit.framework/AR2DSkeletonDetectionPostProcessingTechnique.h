//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class AR2DSkeletonDetectionPostProcessGPU, AR2DSkeletonDetectionResult, AR2DSkeletonRawEspressoResult, NSObject;
@protocol OS_dispatch_queue;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique
{
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct SkeletonJointFilter<float> _extrapolationFilter2D;
    double _extrapolationTime;
    struct SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
    AR2DSkeletonDetectionResult *_previous3DSkeleton;
    _Bool _shouldPush3DSupportSkeleton;
    _Bool _use3DSupportSkeletonForExtrapolation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _deterministic;
    AR2DSkeletonRawEspressoResult *_previousRawEspressoResult;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) AR2DSkeletonRawEspressoResult *previousRawEspressoResult; // @synthesize previousRawEspressoResult=_previousRawEspressoResult;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (void)prepare:(_Bool)arg1;
- (id)init;

@end

