//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutRequest-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>
{
    NSArray *_links;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) Class layoutClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

