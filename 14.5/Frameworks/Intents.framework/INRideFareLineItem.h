//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRideFareLineItemExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INRideFareLineItem : NSObject <INRideFareLineItemExport, NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSDecimalNumber *_price;
    NSString *_currencyCode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

