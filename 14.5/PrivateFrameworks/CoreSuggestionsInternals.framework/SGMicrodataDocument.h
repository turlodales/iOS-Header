//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SGMicrodataDocument : NSObject
{
    NSMutableDictionary *_htmlIds;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSDictionary *htmlIds; // @synthesize htmlIds=_htmlIds;
- (id)init;
- (void)addItem:(id)arg1;
- (void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2;
- (id)asJsonLd;
- (id)jsonLdForItem:(id)arg1;

@end

