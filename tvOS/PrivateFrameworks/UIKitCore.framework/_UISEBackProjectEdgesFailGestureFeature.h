//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UISEGestureFeature.h>

#import <UIKitCore/_UISETouchedEdgesProvider-Protocol.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEBackProjectEdgesFailGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider>
{
    id <_UISEGestureFeatureSettings> _settings;
    _Bool _hasDoneTest;
    struct CGPoint _initialLocation;
    unsigned long long _touchedEdges;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long touchedEdges; // @synthesize touchedEdges=_touchedEdges;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)debugDictionary;
- (id)initWithSettings:(id)arg1;

@end

