//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (void)write:(id)arg1;
- (id)description;

@end

