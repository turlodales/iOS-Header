//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_propName;
    CoreDAVItemWithNoChildren *_allProp;
    CoreDAVItem *_include;
    CoreDAVItem *_prop;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) CoreDAVItem *include; // @synthesize include=_include;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *allProp; // @synthesize allProp=_allProp;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *propName; // @synthesize propName=_propName;
- (id)description;
- (id)init;

@end

