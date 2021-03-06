//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _mask;
    NSString *_selection;
    NSString *_preferred;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preferred; // @synthesize preferred=_preferred;
@property(retain, nonatomic) NSString *selection; // @synthesize selection=_selection;
@property(nonatomic) unsigned char mask; // @synthesize mask=_mask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

