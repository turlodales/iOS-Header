//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaHardwareInterfaceIdentifier : PBCodable
{
    NSString *_interfaceVendorID;
    NSString *_interfaceProductID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *interfaceProductID; // @synthesize interfaceProductID=_interfaceProductID;
@property(copy, nonatomic) NSString *interfaceVendorID; // @synthesize interfaceVendorID=_interfaceVendorID;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end

