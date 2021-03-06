//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_websheetURL;
    NSString *_planPurchaseEndpointType;
    NSString *_warningText;
    NSString *_addOnWebsheetURL;
    NSString *_addOnEndpointType;
    _Bool _applePaySupported;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *addOnEndpointType; // @synthesize addOnEndpointType=_addOnEndpointType;
@property(readonly, nonatomic) NSString *addOnWebsheetURL; // @synthesize addOnWebsheetURL=_addOnWebsheetURL;
@property(readonly, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(readonly, nonatomic) NSString *planPurchaseEndpointType; // @synthesize planPurchaseEndpointType=_planPurchaseEndpointType;
@property(nonatomic) _Bool applePaySupported; // @synthesize applePaySupported=_applePaySupported;
@property(readonly, nonatomic) NSString *websheetURL; // @synthesize websheetURL=_websheetURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(_Bool)arg3 responseType:(id)arg4 warningText:(id)arg5 addOnUrl:(id)arg6 addOnEndpointType:(id)arg7;

@end

