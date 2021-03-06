//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABACAccountStore-Protocol.h>

@class NSString, NSXPCConnection;

@interface ABXPCACAccountStore : NSObject <ABACAccountStore>
{
    NSXPCConnection *_connection;
}

+ (id)sharedACAccountStore;
+ (id)ABACAccountStoreFromACAccountStore:(id)arg1;
+ (id)contactsAccountServiceInterface;
+ (id)resumedContactsAccountsConnection;
+ (id)sharedAccountStore;
+ (id)os_log;
- (void).cxx_destruct;
- (id)prepareStore:(id)arg1;
- (id)_cachedAccountWithIdentifier:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1 returnCachedVersion:(BOOL)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)mergeLocalDataIntoParentAccountWithID:(id)arg1;
- (void)discoverPropertiesForAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)passwordForAccount:(id)arg1;
- (id)accountWithABAccountIdentifier:(id)arg1;
- (id)contactsAccountsWithFetchOptions:(unsigned long long)arg1;
- (void)resumeConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

