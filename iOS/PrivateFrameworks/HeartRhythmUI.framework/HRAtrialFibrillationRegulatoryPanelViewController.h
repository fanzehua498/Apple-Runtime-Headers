//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRAtrialFibrillationRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController
{
    NSArray *_displayableItems;
    long long _reenableFeatureSection;
}

- (void).cxx_destruct;
@property(nonatomic) long long reenableFeatureSection; // @synthesize reenableFeatureSection=_reenableFeatureSection;
- (void)receivedHeartRhythmAvailabilityNotification;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_displayableItemsForReenableFeature;
- (id)_displayableItemsForContactSupport;
- (id)_displayableItemsForInstructionManual;
- (id)_displayableItemsForWatch;
- (id)_displayableItemsForPhone;
- (id)_displayableItemsForFeatureName;
- (_Bool)_shouldDisplayItemsForWatch;
- (id)displayableItems;
- (void)viewDidLoad;

@end

