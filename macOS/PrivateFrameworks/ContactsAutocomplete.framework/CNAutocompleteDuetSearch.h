//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch>
{
    CDUnknownBlockType _peopleSuggesterFactory;
    CNContactStore *_contactStore;
}

+ (id)constrainMechanismsForSearchType:(unsigned long long)arg1;
+ (unsigned long long)predictedResultLimit;
+ (void)configureSettings:(id)arg1 withFetchRequest:(id)arg2;
+ (void)configureContext:(id)arg1 withFetchRequest:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CDUnknownBlockType peopleSuggesterFactory; // @synthesize peopleSuggesterFactory=_peopleSuggesterFactory;
- (id)resultValueForCDContact:(id)arg1;
- (long long)addressTypeForCDContact:(id)arg1;
- (id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2;
- (id)suggesterSettingsForFetchRequest:(id)arg1;
- (id)suggesterContextForFetchRequest:(id)arg1;
- (id)querySuggester:(id)arg1 withContext:(id)arg2 settings:(id)arg3;
- (id)executeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)peopleSuggester;
- (id)initWithPeopleSuggesterFactory:(CDUnknownBlockType)arg1 contactStore:(id)arg2;
- (id)initWithPeopleSuggesterFactory:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

