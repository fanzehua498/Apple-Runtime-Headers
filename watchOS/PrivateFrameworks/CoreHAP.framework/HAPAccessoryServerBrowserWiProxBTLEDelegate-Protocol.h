//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HAPAccessoryServerBrowserWiProxBTLE, NSData, NSNumber, NSString, NSUUID;

@protocol HAPAccessoryServerBrowserWiProxBTLEDelegate
- (void)accessoryServerBrowserBTLE:(HAPAccessoryServerBrowserWiProxBTLE *)arg1 didDiscoverHAPPeripheral:(NSUUID *)arg2 accessoryName:(NSString *)arg3 pairingIdentifier:(NSString *)arg4 advertisementFormat:(unsigned int)arg5 statusFlags:(NSNumber *)arg6 stateNumber:(NSNumber *)arg7 category:(NSNumber *)arg8 configurationNumber:(NSNumber *)arg9 setupHash:(NSData *)arg10 encryptedPayload:(NSData *)arg11;
@end

