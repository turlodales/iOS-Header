//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface NPKPaymentBarcode : NSObject
{
    NSString *_barcodeIdentifier;
    unsigned long long _state;
    NSData *_decryptedBarcodeCredential;
    NSArray *_barcodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *barcodes; // @synthesize barcodes=_barcodes;
@property(retain, nonatomic) NSData *decryptedBarcodeCredential; // @synthesize decryptedBarcodeCredential=_decryptedBarcodeCredential;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *barcodeIdentifier; // @synthesize barcodeIdentifier=_barcodeIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3;

@end

