//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUILimitViewElement.h>

@class NSString;

@interface SKUICountLimitViewElement : SKUILimitViewElement
{
    long long _limitValue;
    NSString *_entityTypeString;
}

+ (_Bool)shouldParseChildDOMElements;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *entityTypeString; // @synthesize entityTypeString=_entityTypeString;
@property(readonly, nonatomic) long long limitValue; // @synthesize limitValue=_limitValue;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

