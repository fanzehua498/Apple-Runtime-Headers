//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSString;
@protocol UITableViewDataSource;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource>
{
    _Bool _limitingWithSections;
    int _maxVisibleSection;
    int _numberOfVisibleItemsInLastSection;
    int _filterType;
    id <UITableViewDataSource> _tableDataSource;
}

@property(nonatomic) id <UITableViewDataSource> tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) int filterType; // @synthesize filterType=_filterType;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)_filteredNumberOfItemsGivenSection:(int)arg1 numberOfItems:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

