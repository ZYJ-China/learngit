//
//  UITableView+MJRefresh.h
//  Book
//
//  Created by  ZhouYingJie on 16/3/15.
//  Copyright © 2016年 ZhouYingJie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MJRefresh.h"

@interface UITableView (MJRefresh)

//添加顶部刷新的功能
- (void)headerAddMJRefresh:(MJRefreshComponentRefreshingBlock)block;

//手动顶部刷新
- (void)headerBeginRefresh;

//取消底部刷新状态
- (void)headerEndRefresh;

//添加底部刷新
- (void)footerAddMJRefresh:(MJRefreshComponentRefreshingBlock)block;

//手动刷新底部
- (void)footerBeginRefresh;

//取消底部刷新状态
- (void)footerEndRefresh;
//取消底部刷新状态并显示无更多数据
- (void)footerEndRefreshNoMoreData;
//重置无数据状态
- (void)footerResetNoMoreData;

@end
