//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject
{
    _Bool _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property(nonatomic) _Bool isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)description;
- (long long)textAlignment;

@end

