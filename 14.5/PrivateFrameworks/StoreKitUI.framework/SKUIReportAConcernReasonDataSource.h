//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonDataSource : NSObject <UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_reasons;
    NSString *_selectReasonTitle;
    NSString *_selectReasonSubtitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *selectReasonSubtitle; // @synthesize selectReasonSubtitle=_selectReasonSubtitle;
@property(copy, nonatomic) NSString *selectReasonTitle; // @synthesize selectReasonTitle=_selectReasonTitle;
@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

