//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernConfiguration : NSObject <NSCopying>
{
    NSURL *_reportConcernURL;
    long long _itemIdentifier;
    NSString *_reportConcernExplanation;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
    NSString *_privacyNote;
    NSArray *_reasons;
}

+ (id)configurationWithTemplateElement:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectReasonSubtitle; // @synthesize selectReasonSubtitle=_selectReasonSubtitle;
@property(copy, nonatomic) NSString *selectReasonTitle; // @synthesize selectReasonTitle=_selectReasonTitle;
@property(copy, nonatomic) NSString *reportConcernExplanation; // @synthesize reportConcernExplanation=_reportConcernExplanation;
@property(nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy, nonatomic) NSURL *reportConcernURL; // @synthesize reportConcernURL=_reportConcernURL;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

