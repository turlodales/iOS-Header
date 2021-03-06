//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentRequest.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>
{
    PKServiceProviderOrder *_serviceProviderOrder;
}

+ (id)availableNetworks;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // @synthesize serviceProviderOrder=_serviceProviderOrder;
- (id)merchantIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceProviderOrder:(id)arg1;

@end

