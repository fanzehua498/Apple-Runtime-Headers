//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NUIWidgetGridView;
@protocol NUIWidgetGridViewItem;

@protocol NUIWidgetGridViewCell
@property(readonly, nonatomic) unsigned int index;
- (CDStruct_b2fbf00d)donatableSpaceAllowRemeasure:(_Bool)arg1;
- (CDStruct_b2fbf00d)donatableSpace;
- (id)initWithWidgetGridView:(NUIWidgetGridView *)arg1 item:(id <NUIWidgetGridViewItem>)arg2 index:(unsigned int)arg3;
@end

