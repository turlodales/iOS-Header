//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCollectionElement.h>

@class IKAppMenuBarDocument;

@interface IKMenuBarElement : IKCollectionElement
{
    IKAppMenuBarDocument *_menuBarDocument;
}

+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(readonly, nonatomic) IKAppMenuBarDocument *menuBarDocument; // @synthesize menuBarDocument=_menuBarDocument;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

