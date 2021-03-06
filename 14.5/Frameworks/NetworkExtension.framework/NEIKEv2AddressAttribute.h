//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying>
{
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property(retain) NWAddressEndpoint *address; // @synthesize address=_address;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (unsigned long long)attributeType;
- (id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3;
- (id)initWithAddress:(id)arg1;

@end

