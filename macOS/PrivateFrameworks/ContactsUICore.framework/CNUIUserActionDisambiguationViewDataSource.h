//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionListDataSource.h>

#import <ContactsUICore/CNUIUserActionDisambiguationViewDataSource-Protocol.h>

@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>
{
}

- (id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;
- (id)categoriesForContactActionsView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) BOOL tracksChanges;

@end

