//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProtocolBuffer/NSSecureCoding-Protocol.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>
{
}

+ (id)options;
+ (_Bool)supportsSecureCoding;
- (id)formattedText;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

