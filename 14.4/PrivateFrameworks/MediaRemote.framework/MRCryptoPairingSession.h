//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDeviceInfo, NSArray;
@protocol MRCryptoPairingSessionDelegate;

@interface MRCryptoPairingSession : NSObject
{
    MRDeviceInfo *_device;
    unsigned long long _role;
    id <MRCryptoPairingSessionDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MRCryptoPairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly, nonatomic) MRDeviceInfo *device; // @synthesize device=_device;
- (_Bool)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updatePeer;
- (id)removePeer;
- (void)close;
- (void)open;
@property(readonly, nonatomic) NSArray *pairedDevices;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end

