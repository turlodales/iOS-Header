//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUILockupViewElement;

__attribute__((visibility("hidden")))
@interface SKUIPreviewTemplateViewElement : SKUIViewElement
{
    long long _itemIdentifier;
    NSString *_previewURLString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *previewURLString; // @synthesize previewURLString=_previewURLString;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) SKUILockupViewElement *previewLockup;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

