/*
 Reference: https://github.com/svenanders/react-iframe/blob/master/src/types.d.ts
*/

module Frame = {
  [@bs.module "react-iframe"] [@react.component]
  external make:
    (
      ~url: string,
      ~src: string=?,
      ~allowFullScreen: bool=?,
      ~position: [@bs.string] [
                   | [@bs.as "absolute"] `Absolute
                   | [@bs.as "fixed"] `Fixed
                   | [@bs.as "sticky"] `Sticky
                   | [@bs.as "static"] `Static
                   | [@bs.as "inherit"] `Inherit
                   | [@bs.as "initial"] `Initial
                   | [@bs.as "unset"] `Unset
                 ]
                   =?,
      ~display: [@bs.string] [
                  | [@bs.as "block"] `Block
                  | [@bs.as "none"] `None
                  | [@bs.as "inline"] `Inline
                ]
                  =?,
      ~height: string=?,
      ~width: string=?,
      ~loading: [@bs.string] [
                  | [@bs.as "auto"] `Auto
                  | [@bs.as "eager"] `Eager
                  | [@bs.as "lazy"] `Lazy
                ]
                  =?,
      ~target: string=?,
      ~importance: [@bs.string] [
                     | [@bs.as "auto"] `Auto
                     | [@bs.as "high"] `High
                     | [@bs.as "low"] `Low
                   ]
                     =?,
      ~overflow: string=?,
      ~styles: ReactDOMRe.Style.t=?,
      ~name: string=?,
      ~allowpaymentrequest: bool=?,
      ~referrerpolicy: [@bs.string] [
                         | [@bs.as "no-referrer"] `NoReferrer
                         | [@bs.as "no-referrer-when-downgrade"]
                           `NoReferrerWhenDowngrade
                         | [@bs.as "origin"] `Origin
                         | [@bs.as "origin-when-cross-origin"]
                           `OriginWhenCrossOrigin
                         | [@bs.as "same-origin"] `SameOrigin
                         | [@bs.as "strict-origin"] `StrictOrigin
                         | [@bs.as "strict-origin-when-cross-origin"]
                           `StrictOriginWhenCrossOrigin
                         | [@bs.as "unsafe-url"] `UnsafeUrl
                       ]
                         =?,
      ~onLoad: unit => unit=?,
      ~onMouseOver: unit => unit=?,
      ~onMouseOut: unit => unit=?,
      ~frameBorder: int=?,
      ~scrolling: [@bs.string] [
                    | [@bs.as "auto"] `Auto
                    | [@bs.as "yes"] `Yes
                    | [@bs.as "no"] `No
                  ]
                    =?,
      ~id: string=?,
      ~ariaHidden: bool=?,
      ~ariaLabel: string=?,
      ~ariaLabelledby: string=?,
      ~className: string=?,
      ~sandbox: [@bs.string] [
                  | [@bs.as "allow-forms"] `AllowForms
                  | [@bs.as "allow-modals"] `AllowModals
                  | [@bs.as "allow-orientation-lock"] `AllowOrientationLock
                  | [@bs.as "allow-pointer-lock"] `AllowPointerLock
                  | [@bs.as "allow-popups"] `AllowPopups
                  | [@bs.as "allow-popups-to-escape-sandbox"]
                    `AllowPopupsToEscapeSandbox
                  | [@bs.as "allow-presentation"] `AllowPresentation
                  | [@bs.as "allow-same-origin"] `AllowSameOrigin
                  | [@bs.as "allow-scripts"] `AllowScripts
                  | [@bs.as "allow-storage-access-by-user-activation"]
                    `AllowStorageAccessByUserActivation
                  | [@bs.as "allow-top-navigation"] `AllowTopNavigation
                  | [@bs.as "allow-top-navigation-by-user-activation"]
                    `AllowTopNavigationByUserActivation
                ]
                  =?,
      ~allow: bool=?,
      ~className: string=?,
      ~title: string=?
    ) =>
    React.element =
    "default";
};