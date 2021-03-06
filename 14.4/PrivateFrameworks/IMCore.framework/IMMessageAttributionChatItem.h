//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem
{
    _Bool _showsLearnMoreLink;
    NSDictionary *_attributionInfo;
    long long _attributionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsLearnMoreLink; // @synthesize showsLearnMoreLink=_showsLearnMoreLink;
@property(readonly, nonatomic) long long attributionType; // @synthesize attributionType=_attributionType;
@property(readonly, copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property(readonly, copy, nonatomic) NSString *bundleID;
- (id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(_Bool)arg4;

@end

