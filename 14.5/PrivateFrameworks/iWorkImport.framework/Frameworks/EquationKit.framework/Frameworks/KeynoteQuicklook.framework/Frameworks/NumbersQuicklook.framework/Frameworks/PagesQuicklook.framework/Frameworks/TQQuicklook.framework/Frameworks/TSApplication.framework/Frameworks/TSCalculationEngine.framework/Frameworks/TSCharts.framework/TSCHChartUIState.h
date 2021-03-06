//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>
#import <TSCharts/TSKUIState-Protocol.h>

@class NSString;

@interface TSCHChartUIState : NSObject <NSCopying, TSKUIState>
{
    _Bool _useFullKeyboard;
    _Bool _isValidMultiDataSetIndex;
    unsigned long long _lastRowSelectedInCDE;
    unsigned long long _lastRowCountInCDE;
    unsigned long long _lastColSelectedInCDE;
    unsigned long long _lastColCountInCDE;
    unsigned long long _multiDataSetIndex;
}

@property(readonly, nonatomic) _Bool isValidMultiDataSetIndex; // @synthesize isValidMultiDataSetIndex=_isValidMultiDataSetIndex;
@property(readonly, nonatomic) _Bool useFullKeyboard; // @synthesize useFullKeyboard=_useFullKeyboard;
@property(readonly, nonatomic) unsigned long long multiDataSetIndex; // @synthesize multiDataSetIndex=_multiDataSetIndex;
@property(readonly, nonatomic) unsigned long long lastColCountInCDE; // @synthesize lastColCountInCDE=_lastColCountInCDE;
@property(readonly, nonatomic) unsigned long long lastColSelectedInCDE; // @synthesize lastColSelectedInCDE=_lastColSelectedInCDE;
@property(readonly, nonatomic) unsigned long long lastRowCountInCDE; // @synthesize lastRowCountInCDE=_lastRowCountInCDE;
@property(readonly, nonatomic) unsigned long long lastRowSelectedInCDE; // @synthesize lastRowSelectedInCDE=_lastRowSelectedInCDE;
- (void)resetForInitialViewing;
- (void)saveToArchive:(struct ChartUIState *)arg1;
- (id)initWithArchive:(const struct ChartUIState *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRowRange:(struct _NSRange)arg1 colRange:(struct _NSRange)arg2 useFullKeyboard:(_Bool)arg3 multiDataSetIndex:(unsigned long long)arg4 validIndex:(_Bool)arg5;
- (id)initWithRowRange:(struct _NSRange)arg1 colRange:(struct _NSRange)arg2 useFullKeyboard:(_Bool)arg3 multiDataSetIndex:(unsigned long long)arg4;
- (id)initWithRowRange:(struct _NSRange)arg1 colRange:(struct _NSRange)arg2 useFullKeyboard:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

