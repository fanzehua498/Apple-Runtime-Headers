//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol CNTCC
- (_Bool)accessCheckAuditToken:(CDStruct_4c969caf)arg1 forService:(long long)arg2;
- (_Bool)isAccessRestrictedForService:(long long)arg1;
- (long long)accessPreflightForService:(long long)arg1;
- (void)requestAccessForService:(long long)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

