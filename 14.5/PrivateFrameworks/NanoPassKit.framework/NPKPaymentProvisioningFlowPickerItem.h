//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NPKPaymentProvisioningFlowPickerItem : NSObject
{
    NSString *_title;
    NSArray *_products;
    NSString *_identifier;
}

+ (id)itemWithIdentifier:(id)arg1 products:(id)arg2;
+ (id)itemWithIdentifier:(id)arg1 title:(id)arg2 products:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end

