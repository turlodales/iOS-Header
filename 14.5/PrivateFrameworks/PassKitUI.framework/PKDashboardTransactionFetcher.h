//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSDictionary, NSSet, NSString, PKCurrencyAmount, PKInstallmentPlan, PKMerchant, PKPaymentPass, PKTransactionSourceCollection;
@protocol OS_dispatch_queue, PKDashboardTransactionFetcherDelegate, PKPaymentDataProvider;

@interface PKDashboardTransactionFetcher : NSObject <PKPaymentDataProviderDelegate>
{
    PKTransactionSourceCollection *_transactionSourceCollection;
    id <PKPaymentDataProvider> _paymentDataProvider;
    id <PKDashboardTransactionFetcherDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s _lockUpdate;
    _Bool _pendingUpdate;
    _Bool _hasMoreUpdates;
    PKMerchant *_merchant;
    NSSet *_counterpartHandles;
    long long _merchantCategory;
    long long _transactionType;
    PKInstallmentPlan *_installmentPlan;
    NSArray *_regions;
    NSArray *_types;
    NSArray *_sources;
    NSArray *_statuses;
    PKCurrencyAmount *_amount;
    long long _amountComparison;
    NSSet *_tags;
    NSDecimalNumber *_rewardsValue;
    unsigned long long _rewardsValueUnit;
    long long _subType;
    NSSet *_filteredTransactionSourceIdentifiers;
    unsigned long long _limit;
    PKPaymentPass *_cashbackPass;
    NSString *_cashbackPassUniqueID;
    PKTransactionSourceCollection *_cashbackTransactionSourceColleciton;
    _Bool _needsCashbackUniqueID;
    NSDictionary *_cashbackGroups;
    _Bool _needsInstantWithdrawalFees;
    NSArray *_instantWithdrawalFeeGroups;
    unsigned long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PKPaymentDataProvider> paymentDataProvider; // @synthesize paymentDataProvider=_paymentDataProvider;
@property(readonly, nonatomic) NSSet *counterpartHandles; // @synthesize counterpartHandles=_counterpartHandles;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <PKDashboardTransactionFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)_sendUpdatedTransactions;
- (id)_sortedTransactions:(id)arg1 ascending:(_Bool)arg2;
- (id)_feeTotalForTransaction:(id)arg1;
- (void)_processPaymentPassTransactionsWithTransactions:(id)arg1 sendTransactionsBlock:(CDUnknownBlockType)arg2;
- (void)_addInstantWidthdrawalTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_addCashbackTransactions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)instantWithdrawalFeesTransactionGroups;
- (id)cashbackPass;
- (id)cashbackGroupForDateComponents:(id)arg1 cashbackTransactionSourceCollection:(id *)arg2;
- (id)cashbackGroupForTransactionWithIdentifier:(id)arg1 cashbackTransactionSourceCollection:(id *)arg2;
- (void)transactionsMonthlyAmountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)transactionsYearlyCountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionRequestForCurrentFilters;
- (void)reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionSourceIdentifiers;
- (void)filterTransactionSourceIdentifiers:(id)arg1;
- (void)filterPeerPaymentSubType:(long long)arg1;
- (void)filterRewardsValue:(id)arg1 unit:(unsigned long long)arg2;
- (void)filterAmount:(id)arg1 comparison:(long long)arg2;
- (void)filterStatuses:(id)arg1;
- (void)filterSources:(id)arg1;
- (void)filterTypes:(id)arg1;
- (void)filterTags:(id)arg1;
- (void)filterRegions:(id)arg1;
- (void)filterCategory:(long long)arg1;
- (void)filterMerchant:(id)arg1;
- (void)setLimit:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_commonSetup;
- (id)initWithRegions:(id)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithInstallmentPlan:(id)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithTransactionType:(long long)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithMerchantCategory:(long long)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithCounterpartHandles:(id)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithMerchant:(id)arg1 transactionSourceCollection:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithTransactionSourceCollection:(id)arg1 paymentDataProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

